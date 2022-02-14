
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amd_page_map {unsigned long* real; unsigned long* remapped; } ;
struct TYPE_2__ {int scratch_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (unsigned long*) ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct amd_page_map *VAR_4)
{
 int VAR_5;

 VAR_4->real = (unsigned long *) FUNC_0(VAR_1);
 if (VAR_4->real == ((void*)0))
  return -VAR_0;

 FUNC_2((unsigned long)VAR_4->real, 1);
 VAR_4->remapped = VAR_4->real;

 for (VAR_5 = 0; VAR_5 < VAR_2 / sizeof(unsigned long); VAR_5++) {
  FUNC_3(VAR_3->scratch_page, VAR_4->remapped+VAR_5);
  FUNC_1(VAR_4->remapped+VAR_5);
 }

 return 0;
}
