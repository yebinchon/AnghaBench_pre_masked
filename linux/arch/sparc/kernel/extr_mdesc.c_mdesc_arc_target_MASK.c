
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mdesc_handle {int mdesc; } ;
struct TYPE_2__ {int val; } ;
struct mdesc_elem {TYPE_1__ d; } ;


 struct mdesc_elem* FUNC_0 (int *) ;

u64 FUNC_1(struct mdesc_handle *VAR_0, u64 VAR_1)
{
 struct mdesc_elem *VAR_2, *VAR_3 = FUNC_0(&VAR_0->mdesc);

 VAR_2 = VAR_3 + VAR_1;

 return VAR_2->d.val;
}
