
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int* data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct adb_request* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int* VAR_11 ;

__attribute__((used)) static void FUNC_0(void)
{
 struct adb_request *VAR_12;

 VAR_12 = VAR_7;







 VAR_6 = VAR_12->data[1];

 VAR_11[VAR_0] |= VAR_3;

 VAR_11[VAR_2] = VAR_12->data[1];

 VAR_11[VAR_1] = (VAR_11[VAR_1] & ~VAR_5) | VAR_4;

 VAR_9 = VAR_10;
 VAR_8 = 2;
}
