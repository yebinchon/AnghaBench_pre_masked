
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mod_freesync {int dummy; } ;
struct dc {int dummy; } ;
struct core_freesync {struct mod_freesync public; struct dc* dc; } ;


 int VAR_0 ;
 int FUNC_0 (struct core_freesync*) ;
 struct core_freesync* FUNC_1 (int,int ) ;

struct mod_freesync *FUNC_2(struct dc *VAR_1)
{
 struct core_freesync *VAR_2 =
   FUNC_1(sizeof(struct core_freesync), VAR_0);

 if (VAR_2 == ((void*)0))
  goto fail_alloc_context;

 if (VAR_1 == ((void*)0))
  goto fail_construct;

 VAR_2->dc = VAR_1;
 return &VAR_2->public;

fail_construct:
 FUNC_0(VAR_2);

fail_alloc_context:
 return ((void*)0);
}
