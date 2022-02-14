
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore {int area; int current_area; } ;
typedef int chunk_t ;


 int FUNC_0 (struct pstore*,int ) ;
 int FUNC_1 (struct pstore*,int ,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct pstore *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 chunk_t VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_0->current_area);

 VAR_3 = FUNC_1(VAR_0, VAR_0->area, VAR_4, VAR_1, VAR_2, 0);
 if (VAR_3)
  return VAR_3;

 return 0;
}
