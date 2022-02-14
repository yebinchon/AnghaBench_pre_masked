
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_classifier_instance {int sock; int stop; } ;


 int FUNC_0 (struct nl_classifier_instance*) ;
 int FUNC_1 (struct nl_classifier_instance*) ;
 int FUNC_2 (struct nl_classifier_instance*,unsigned char,unsigned long*,unsigned long*,unsigned short,unsigned short,int) ;
 int FUNC_3 (int,char**,unsigned char*,unsigned long*,unsigned long*,unsigned short*,unsigned short*,int*) ;
 struct nl_classifier_instance VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

int FUNC_6(int VAR_1, char *VAR_2[])
{
 struct nl_classifier_instance *VAR_3 = &VAR_0;
 unsigned char VAR_4;
 unsigned long VAR_5[4];
 unsigned long VAR_6[4];
 unsigned short VAR_7;
 unsigned short VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_1, VAR_2, &VAR_4, VAR_5, VAR_6, &VAR_7, &VAR_8, &VAR_9);
 if (VAR_10 < 0) {
  FUNC_5("Failed to parse arguments\n");
  return VAR_10;
 }

 VAR_10 = FUNC_1(VAR_3);
 if (VAR_10 < 0) {
  FUNC_5("Unable to init generic netlink\n");
  return VAR_10;
 }

 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);


 while (!VAR_3->stop) {
  FUNC_4(VAR_3->sock);
 }

 FUNC_0(VAR_3);

 return 0;
}
