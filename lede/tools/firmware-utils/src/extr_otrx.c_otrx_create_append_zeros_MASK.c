
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t ssize_t ;
typedef int FILE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,size_t,int ) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *,int,size_t,int *) ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (int *,int ,size_t) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ssize_t FUNC_5(FILE *VAR_4, size_t VAR_5) {
 uint8_t *VAR_6;

 VAR_6 = FUNC_3(VAR_5);
 if (!VAR_6)
  return -VAR_1;
 FUNC_4(VAR_6, 0, VAR_5);

 if (FUNC_2(VAR_6, 1, VAR_5, VAR_4) != VAR_5) {
  FUNC_0(VAR_2, "Couldn't write %zu B to %s\n", VAR_5, VAR_3);
  FUNC_1(VAR_6);
  return -VAR_0;
 }

 FUNC_1(VAR_6);

 return VAR_5;
}
