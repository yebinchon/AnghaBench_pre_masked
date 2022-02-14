
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cand {int x; int y; int pred; } ;


 int VAR_0 ;
 struct cand* VAR_1 ;
 int VAR_2 ;
 struct cand* FUNC_0 (struct cand*,int,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_3, int VAR_4, int VAR_5)
{
 struct cand *VAR_6;

 if (VAR_0 == VAR_2) {
  VAR_2 = VAR_2 * 11 / 10;
  VAR_1 = FUNC_0(VAR_1, VAR_2, sizeof(*VAR_1));
 }
 VAR_6 = VAR_1 + VAR_0;
 VAR_6->x = VAR_3;
 VAR_6->y = VAR_4;
 VAR_6->pred = VAR_5;
 return (VAR_0++);
}
