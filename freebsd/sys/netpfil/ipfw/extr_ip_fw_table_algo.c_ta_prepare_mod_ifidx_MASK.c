
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mod_item {int size; int main_ptr; } ;
struct ifidx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct mod_item*,int ,int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_3, uint64_t *VAR_4)
{
 struct mod_item *VAR_5;

 VAR_5 = (struct mod_item *)VAR_3;

 FUNC_1(VAR_5, 0, sizeof(struct mod_item));
 VAR_5->size = *VAR_4;
 VAR_5->main_ptr = FUNC_0(sizeof(struct ifidx) * VAR_5->size, VAR_0,
     VAR_1 | VAR_2);

 return (0);
}
