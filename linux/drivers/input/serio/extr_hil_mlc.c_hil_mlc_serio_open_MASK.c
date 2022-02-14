
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct hil_mlc_serio_map* port_data; } ;
struct hil_mlc_serio_map {struct hil_mlc* mlc; } ;
struct hil_mlc {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (struct serio*) ;

__attribute__((used)) static int FUNC_2(struct serio *VAR_1)
{
 struct hil_mlc_serio_map *VAR_2;
 struct hil_mlc *VAR_3;

 if (FUNC_1(VAR_1) != ((void*)0))
  return -VAR_0;

 VAR_2 = VAR_1->port_data;
 FUNC_0(VAR_2 == ((void*)0));

 VAR_3 = VAR_2->mlc;
 FUNC_0(VAR_3 == ((void*)0));

 return 0;
}
