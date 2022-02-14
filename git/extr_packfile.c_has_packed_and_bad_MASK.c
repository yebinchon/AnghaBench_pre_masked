
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct repository {TYPE_1__* objects; } ;
typedef struct packed_git {unsigned int num_bad_objects; scalar_t__ bad_object_sha1; struct packed_git const* next; } const packed_git ;
struct TYPE_4__ {unsigned int rawsz; } ;
struct TYPE_3__ {struct packed_git const* packed_git; } ;


 scalar_t__ FUNC_0 (unsigned char const*,scalar_t__) ;
 TYPE_2__* VAR_0 ;

const struct packed_git *FUNC_1(struct repository *VAR_1,
         const unsigned char *VAR_2)
{
 struct packed_git *VAR_3;
 unsigned VAR_4;

 for (VAR_3 = VAR_1->objects->packed_git; VAR_3; VAR_3 = VAR_3->next)
  for (VAR_4 = 0; VAR_4 < VAR_3->num_bad_objects; VAR_4++)
   if (FUNC_0(VAR_2,
       VAR_3->bad_object_sha1 + VAR_0->rawsz * VAR_4))
    return VAR_3;
 return ((void*)0);
}
