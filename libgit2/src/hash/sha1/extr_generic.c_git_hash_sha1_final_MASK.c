
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ id; } ;
typedef TYPE_1__ git_oid ;
struct TYPE_7__ {int size; int * H; } ;
typedef TYPE_2__ git_hash_sha1_ctx ;


 int FUNC_0 (TYPE_2__*,...) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;

int FUNC_3(git_oid *VAR_0, git_hash_sha1_ctx *VAR_1)
{
 static const unsigned char VAR_2[64] = { 0x80 };
 unsigned int VAR_3[2];
 int VAR_4;


 VAR_3[0] = FUNC_1((uint32_t)(VAR_1->size >> 29));
 VAR_3[1] = FUNC_1((uint32_t)(VAR_1->size << 3));

 VAR_4 = VAR_1->size & 63;
 FUNC_0(VAR_1, VAR_2, 1+ (63 & (55 - VAR_4)));
 FUNC_0(VAR_1, VAR_3, 8);


 for (VAR_4 = 0; VAR_4 < 5; VAR_4++)
  FUNC_2(VAR_0->id + VAR_4*4, VAR_1->H[VAR_4]);

 return 0;
}
