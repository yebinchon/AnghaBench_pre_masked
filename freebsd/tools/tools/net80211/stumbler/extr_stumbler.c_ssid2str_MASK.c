
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_info {char* ssid; scalar_t__ ap; } ;
typedef int res ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

char* FUNC_4(struct node_info* VAR_0) {
 static char VAR_1[24];

 FUNC_1(VAR_1, ' ', sizeof(VAR_1));
 VAR_1[0] = '[';
 FUNC_2(&VAR_1[sizeof(VAR_1)-2], "]");

 if (VAR_0->ap) {
  int VAR_2 = sizeof(VAR_1) - 3;

  if (FUNC_3(VAR_0->ssid) < VAR_2)
   VAR_2 = FUNC_3(VAR_0->ssid);
  FUNC_0(&VAR_1[1], VAR_0->ssid, VAR_2);
 }
 else {
  FUNC_0(&VAR_1[1], "<client>", 8);
 }
 return VAR_1;
}
