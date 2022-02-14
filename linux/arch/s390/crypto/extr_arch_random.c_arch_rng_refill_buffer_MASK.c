
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct work_struct {int dummy; } ;
typedef int seed ;
typedef int prng_wa ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int **,int *,unsigned int,int *,int) ;
 int FUNC_1 (int *,int ,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int *,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_6(struct work_struct *VAR_10)
{
 unsigned int VAR_11 = VAR_1;

 FUNC_4(&VAR_7);
 if (VAR_6 > VAR_2) {

  u8 VAR_12[VAR_0];
  u8 VAR_13[240];

  FUNC_1(((void*)0), 0, VAR_12, sizeof(VAR_12));

  FUNC_2(VAR_13, 0, sizeof(VAR_13));
  FUNC_0(VAR_4,
      &VAR_13, ((void*)0), 0, VAR_12, sizeof(VAR_12));
  FUNC_0(VAR_3,
      &VAR_13, VAR_5, VAR_2, ((void*)0), 0);
  VAR_6 = VAR_2;
 }
 VAR_11 += (VAR_1 * VAR_6) / VAR_2;
 FUNC_5(&VAR_7);


 FUNC_3(VAR_9, &VAR_8, VAR_11);
}
