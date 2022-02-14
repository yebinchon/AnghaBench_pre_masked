
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct closure {int remaining; struct closure* parent; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct closure*) ;
 int FUNC_2 (struct closure*) ;
 int FUNC_3 (struct closure*) ;
 int FUNC_4 (struct closure*,int ,int) ;

__attribute__((used)) static inline void FUNC_5(struct closure *VAR_1, struct closure *VAR_2)
{
 FUNC_4(VAR_1, 0, sizeof(struct closure));
 VAR_1->parent = VAR_2;
 if (VAR_2)
  FUNC_2(VAR_2);

 FUNC_0(&VAR_1->remaining, VAR_0);

 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
}
