
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rmi_2d_sensor {int dummy; } ;
struct f11_2d_data {int * rel_pos; } ;
struct f11_data {struct f11_2d_data data; struct rmi_2d_sensor sensor; } ;
typedef int s8 ;


 size_t VAR_0 ;
 int FUNC_0 (struct rmi_2d_sensor*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct f11_data *VAR_1, u8 VAR_2)
{
 struct rmi_2d_sensor *VAR_3 = &VAR_1->sensor;
 struct f11_2d_data *VAR_4 = &VAR_1->data;
 s8 VAR_5, VAR_6;

 VAR_5 = VAR_4->rel_pos[VAR_2 * VAR_0];
 VAR_6 = VAR_4->rel_pos[VAR_2 * VAR_0 + 1];

 FUNC_0(VAR_3, VAR_5, VAR_6);
}
