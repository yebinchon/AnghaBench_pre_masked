
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_sink {int * dc_container_id; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct dc_sink *VAR_0)
{
 if (VAR_0->dc_container_id) {
  FUNC_0(VAR_0->dc_container_id);
  VAR_0->dc_container_id = ((void*)0);
 }
}
