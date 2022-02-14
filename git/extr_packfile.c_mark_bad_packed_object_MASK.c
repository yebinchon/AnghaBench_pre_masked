
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packed_git {unsigned int num_bad_objects; scalar_t__ bad_object_sha1; } ;
struct TYPE_2__ {unsigned int rawsz; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned char const*) ;
 scalar_t__ FUNC_1 (unsigned char const*,scalar_t__) ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;

void FUNC_5(struct packed_git *VAR_2, const unsigned char *VAR_3)
{
 unsigned VAR_4;
 const unsigned VAR_5 = VAR_1->rawsz;
 for (VAR_4 = 0; VAR_4 < VAR_2->num_bad_objects; VAR_4++)
  if (FUNC_1(VAR_3, VAR_2->bad_object_sha1 + VAR_5 * VAR_4))
   return;
 VAR_2->bad_object_sha1 = FUNC_4(VAR_2->bad_object_sha1,
          FUNC_3(VAR_0,
           FUNC_2(VAR_2->num_bad_objects, 1)));
 FUNC_0(VAR_2->bad_object_sha1 + VAR_5 * VAR_2->num_bad_objects, VAR_3);
 VAR_2->num_bad_objects++;
}
