
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int hash; } ;
struct TYPE_3__ {int offset; int crc32; } ;
struct object_entry {unsigned long type; unsigned long size; TYPE_1__ idx; void* hdr_size; } ;
typedef int off_t ;
struct TYPE_4__ {int rawsz; } ;


 int FUNC_0 (int,int) ;






 int FUNC_1 (char*) ;
 int FUNC_2 (int,int ,...) ;
 void* VAR_0 ;
 int FUNC_3 (int ,int *,int ) ;
 unsigned char* FUNC_4 (int) ;
 int FUNC_5 (int ,unsigned char*) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 void* FUNC_6 (void*,unsigned long,long,struct object_id*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void *FUNC_8(struct object_entry *VAR_3,
         off_t *VAR_4,
         struct object_id *VAR_5,
         struct object_id *VAR_6)
{
 unsigned char *VAR_7;
 unsigned long VAR_8, VAR_9;
 off_t VAR_10;
 unsigned VAR_11;
 void *VAR_12;

 VAR_3->idx.offset = VAR_0;
 VAR_1 = FUNC_3(0, ((void*)0), 0);

 VAR_7 = FUNC_4(1);
 VAR_9 = *VAR_7;
 FUNC_7(1);
 VAR_3->type = (VAR_9 >> 4) & 7;
 VAR_8 = (VAR_9 & 15);
 VAR_11 = 4;
 while (VAR_9 & 0x80) {
  VAR_7 = FUNC_4(1);
  VAR_9 = *VAR_7;
  FUNC_7(1);
  VAR_8 += (VAR_9 & 0x7f) << VAR_11;
  VAR_11 += 7;
 }
 VAR_3->size = VAR_8;

 switch (VAR_3->type) {
 case 130:
  FUNC_5(VAR_5->hash, FUNC_4(VAR_2->rawsz));
  FUNC_7(VAR_2->rawsz);
  break;
 case 131:
  VAR_7 = FUNC_4(1);
  VAR_9 = *VAR_7;
  FUNC_7(1);
  VAR_10 = VAR_9 & 127;
  while (VAR_9 & 128) {
   VAR_10 += 1;
   if (!VAR_10 || FUNC_0(VAR_10, 7))
    FUNC_2(VAR_3->idx.offset, FUNC_1("offset value overflow for delta base object"));
   VAR_7 = FUNC_4(1);
   VAR_9 = *VAR_7;
   FUNC_7(1);
   VAR_10 = (VAR_10 << 7) + (VAR_9 & 127);
  }
  *VAR_4 = VAR_3->idx.offset - VAR_10;
  if (*VAR_4 <= 0 || *VAR_4 >= VAR_3->idx.offset)
   FUNC_2(VAR_3->idx.offset, FUNC_1("delta base offset is out of bound"));
  break;
 case 132:
 case 128:
 case 133:
 case 129:
  break;
 default:
  FUNC_2(VAR_3->idx.offset, FUNC_1("unknown object type %d"), VAR_3->type);
 }
 VAR_3->hdr_size = VAR_0 - VAR_3->idx.offset;

 VAR_12 = FUNC_6(VAR_3->idx.offset, VAR_3->size, VAR_3->type, VAR_6);
 VAR_3->idx.crc32 = VAR_1;
 return VAR_12;
}
