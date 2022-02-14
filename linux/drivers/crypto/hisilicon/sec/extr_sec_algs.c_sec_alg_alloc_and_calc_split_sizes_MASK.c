
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(int VAR_3, size_t **VAR_4,
           int *VAR_5)
{
 size_t *VAR_6;
 int VAR_7;


 *VAR_5 = FUNC_1(VAR_3, VAR_2) / VAR_2;
 VAR_6 = FUNC_0(*VAR_5, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < *VAR_5 - 1; VAR_7++)
  VAR_6[VAR_7] = VAR_2;
 VAR_6[*VAR_5 - 1] = VAR_3 - VAR_2 * (*VAR_5 - 1);
 *VAR_4 = VAR_6;

 return 0;
}
