
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edimax_header {void* header_csum; void* data_csum; int type; void* data_size; void* end_addr; void* start_addr; int force; int mtd_name; int fw_version; int magic; int model; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (unsigned char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 void* FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_4 (int) ;
 int FUNC_5 (struct edimax_header*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ,char*,int) ;
 int VAR_11 ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_12;
 char *VAR_13;
 char *VAR_14;
 struct edimax_header *VAR_15;
 int VAR_16 = VAR_0;

 VAR_12 = sizeof(struct edimax_header) + VAR_2;

 VAR_13 = FUNC_4(VAR_12);
 if (!VAR_13) {
  FUNC_0("no memory for buffer\n");
  goto out;
 }

 VAR_14 = VAR_13 + sizeof(struct edimax_header);


 VAR_16 = FUNC_6(VAR_6, VAR_14, VAR_2);
 if (VAR_16)
  goto out_free_buf;


 VAR_15 = (struct edimax_header *)VAR_13;
 FUNC_5(VAR_15, 0, sizeof(struct edimax_header));

 FUNC_7(VAR_15->model, VAR_9, sizeof(VAR_15->model));
 FUNC_7(VAR_15->magic, VAR_8, sizeof(VAR_15->magic));
 FUNC_7(VAR_15->fw_version, VAR_5, sizeof(VAR_15->fw_version));
 FUNC_7(VAR_15->mtd_name, VAR_10, sizeof(VAR_15->mtd_name));

 VAR_15->force = VAR_4;
 VAR_15->start_addr = FUNC_3(VAR_11);
 VAR_15->end_addr = FUNC_3(VAR_3);
 VAR_15->data_size = FUNC_3(VAR_2);
 VAR_15->type = VAR_7;

 VAR_15->data_csum = FUNC_1((unsigned char *)VAR_14, VAR_2);
 VAR_15->header_csum = FUNC_1((unsigned char *)VAR_15,
        sizeof(struct edimax_header));

 VAR_16 = FUNC_8(VAR_13, VAR_12);
 if (VAR_16)
  goto out_free_buf;

 VAR_16 = VAR_1;

out_free_buf:
 FUNC_2(VAR_13);
out:
 return VAR_16;
}
