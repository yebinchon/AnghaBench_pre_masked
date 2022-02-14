
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hash; } ;
struct TYPE_4__ {TYPE_1__ oid; int crc32; scalar_t__ offset; } ;
struct object_entry {unsigned long size; int hdr_size; int type; int real_type; TYPE_2__ idx; } ;
struct hashfile {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (struct hashfile*) ;
 int FUNC_1 (struct hashfile*) ;
 int FUNC_2 (int ,unsigned char const*) ;
 int FUNC_3 (struct hashfile*) ;
 int FUNC_4 (struct hashfile*,unsigned char*,int) ;
 int VAR_0 ;
 struct object_entry* VAR_1 ;
 scalar_t__ FUNC_5 (struct hashfile*,void*,unsigned long) ;

__attribute__((used)) static struct object_entry *FUNC_6(struct hashfile *VAR_2,
          const unsigned char *VAR_3, void *VAR_4,
          unsigned long VAR_5, enum object_type VAR_6)
{
 struct object_entry *VAR_7 = &VAR_1[VAR_0++];
 unsigned char VAR_8[10];
 unsigned long VAR_9 = VAR_5;
 int VAR_10 = 0;
 unsigned char VAR_11 = (VAR_6 << 4) | (VAR_9 & 15);
 VAR_9 >>= 4;
 while (VAR_9) {
  VAR_8[VAR_10++] = VAR_11 | 0x80;
  VAR_11 = VAR_9 & 0x7f;
  VAR_9 >>= 7;
 }
 VAR_8[VAR_10++] = VAR_11;
 FUNC_0(VAR_2);
 FUNC_4(VAR_2, VAR_8, VAR_10);
 VAR_7[0].size = VAR_5;
 VAR_7[0].hdr_size = VAR_10;
 VAR_7[0].type = VAR_6;
 VAR_7[0].real_type = VAR_6;
 VAR_7[1].idx.offset = VAR_7[0].idx.offset + VAR_10;
 VAR_7[1].idx.offset += FUNC_5(VAR_2, VAR_4, VAR_5);
 VAR_7[0].idx.crc32 = FUNC_1(VAR_2);
 FUNC_3(VAR_2);
 FUNC_2(VAR_7->idx.oid.hash, VAR_3);
 return VAR_7;
}
