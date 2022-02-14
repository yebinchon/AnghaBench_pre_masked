
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** oids; scalar_t__ invokes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int *,int ,int ,int *,int ) ;
 int VAR_6 ;
 int FUNC_5 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_6(void)
{
 char *VAR_9[] = {
  "493568b7a2681187aaac8a58d3f1eab1527cba84", ((void*)0) };

 char *VAR_10[] = {
  "7f89a8b15c878809c5c54d1ff8f8c9674154017b",
  "493568b7a2681187aaac8a58d3f1eab1527cba84", ((void*)0) };

 char *VAR_11[] = {
  "c95599a8fef20a7e57582c6727b1a0d02e0a5828",
  "7f89a8b15c878809c5c54d1ff8f8c9674154017b",
  "493568b7a2681187aaac8a58d3f1eab1527cba84", ((void*)0) };

 FUNC_1(FUNC_2(&VAR_6, VAR_3, 0));

 FUNC_5(VAR_6, VAR_7);

 FUNC_1(FUNC_4(
  &VAR_8,
  VAR_6,
  VAR_7,
  ((void*)0),
  VAR_0));

 VAR_5.oids = VAR_9;

 FUNC_1(FUNC_3(VAR_6, VAR_4, &VAR_5));
 FUNC_0(1, VAR_5.invokes);


 FUNC_1(FUNC_4(
  &VAR_8,
  VAR_6,
  VAR_7,
  ((void*)0),
  VAR_2));

 VAR_5.oids = VAR_10;
 VAR_5.invokes = 0;

 FUNC_1(FUNC_3(VAR_6, VAR_4, &VAR_5));
 FUNC_0(2, VAR_5.invokes);


 FUNC_1(FUNC_4(
  &VAR_8,
  VAR_6,
  VAR_7,
  ((void*)0),
  VAR_1));

 VAR_5.oids = VAR_11;
 VAR_5.invokes = 0;

 FUNC_1(FUNC_3(VAR_6, VAR_4, &VAR_5));
 FUNC_0(3, VAR_5.invokes);
}
