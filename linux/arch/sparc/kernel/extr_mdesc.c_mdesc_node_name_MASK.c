
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {int node_sz; } ;
struct mdesc_handle {TYPE_1__ mdesc; } ;
struct mdesc_elem {scalar_t__ tag; int name_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (TYPE_1__*) ;
 struct mdesc_elem* FUNC_1 (TYPE_1__*) ;

const char *FUNC_2(struct mdesc_handle *VAR_2, u64 VAR_3)
{
 struct mdesc_elem *VAR_4, *VAR_5 = FUNC_1(&VAR_2->mdesc);
 const char *VAR_6 = FUNC_0(&VAR_2->mdesc);
 u64 VAR_7 = VAR_2->mdesc.node_sz / 16;

 if (VAR_3 == VAR_0 || VAR_3 >= VAR_7)
  return ((void*)0);

 VAR_4 = VAR_5 + VAR_3;
 if (VAR_4->tag != VAR_1)
  return ((void*)0);

 return VAR_6 + VAR_4->name_offset;
}
