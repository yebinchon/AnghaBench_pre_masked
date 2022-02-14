
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct fw_tail {void* crc; void* hw_id; } ;
struct fw_header {void* length; void* magic; } ;
struct TYPE_6__ {int hw_id; } ;
struct TYPE_5__ {int file_size; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 TYPE_1__ VAR_6 ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_8;
 char *VAR_9;
 char *VAR_10;
 int VAR_11 = VAR_0;
 int VAR_12 = 0;
 uint32_t VAR_13;
 struct fw_header *VAR_14;
 struct fw_tail *VAR_15;

 VAR_8 = 3 * sizeof(struct fw_header) +
   VAR_6.file_size + VAR_7.file_size +
   3 * sizeof(struct fw_tail);

 VAR_9 = FUNC_5(VAR_8);
 if (!VAR_9) {
  FUNC_0("no memory for buffer\n");
  goto out;
 }

 VAR_10 = VAR_9;
 FUNC_6(VAR_10, 0, VAR_8);


 VAR_14 = (struct fw_header *) VAR_10;
 VAR_14->magic = FUNC_2(VAR_2);
 VAR_14->length = FUNC_2(VAR_8 - sizeof(struct fw_header));
 VAR_10 += sizeof(struct fw_header);


 VAR_14 = (struct fw_header *) VAR_10;
 VAR_14->magic = FUNC_2(VAR_3);
 VAR_14->length = FUNC_2(VAR_6.file_size +
       sizeof(struct fw_tail));
 VAR_10 += sizeof(struct fw_header);


 VAR_11 = FUNC_7(&VAR_6, VAR_10);
 if (VAR_11)
  goto out_free_buf;


 VAR_15 = (struct fw_tail *) (VAR_10 + VAR_6.file_size);
 VAR_15->hw_id = FUNC_1(VAR_5->hw_id);
 VAR_15->crc = FUNC_1(FUNC_3(VAR_10, VAR_6.file_size +
         sizeof(struct fw_tail) - 4));

 VAR_10 += VAR_6.file_size + sizeof(struct fw_tail);


 VAR_14 = (struct fw_header *) VAR_10;
 VAR_14->magic = FUNC_2(VAR_4);
 VAR_14->length = FUNC_2(VAR_7.file_size +
       sizeof(struct fw_tail));
 VAR_10 += sizeof(struct fw_header);


 VAR_11 = FUNC_7(&VAR_7, VAR_10);
 if (VAR_11)
  goto out_free_buf;


 VAR_15 = (struct fw_tail *) (VAR_10 + VAR_7.file_size);
 VAR_15->hw_id = FUNC_1(VAR_5->hw_id);
 VAR_15->crc = FUNC_1(FUNC_3(VAR_10, VAR_7.file_size +
         sizeof(struct fw_tail) - 4));

 VAR_10 += VAR_7.file_size + sizeof(struct fw_tail);


 VAR_15 = (struct fw_tail *) VAR_10;
 VAR_15->hw_id = FUNC_1(VAR_5->hw_id);
 VAR_15->crc = FUNC_1(FUNC_3(VAR_9 + sizeof(struct fw_header),
     VAR_8 - sizeof(struct fw_header) - 4));

 VAR_11 = FUNC_8(VAR_9, VAR_8);
 if (VAR_11)
  goto out_free_buf;

 VAR_11 = VAR_1;

 out_free_buf:
 FUNC_4(VAR_9);
 out:
 return VAR_11;
}
