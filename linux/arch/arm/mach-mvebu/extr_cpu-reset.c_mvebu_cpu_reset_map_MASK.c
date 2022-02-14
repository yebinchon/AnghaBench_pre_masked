
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device_node {int full_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct device_node*,int,struct resource*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct resource*) ;

__attribute__((used)) static int FUNC_6(struct device_node *VAR_5, int VAR_6)
{
 struct resource VAR_7;

 if (FUNC_1(VAR_5, VAR_6, &VAR_7)) {
  FUNC_2("unable to get resource\n");
  return -VAR_1;
 }

 if (!FUNC_4(VAR_7.start, FUNC_5(&VAR_7),
    VAR_5->full_name)) {
  FUNC_2("unable to request region\n");
  return -VAR_0;
 }

 VAR_3 = FUNC_0(VAR_7.start, FUNC_5(&VAR_7));
 if (!VAR_3) {
  FUNC_2("unable to map registers\n");
  FUNC_3(VAR_7.start, FUNC_5(&VAR_7));
  return -VAR_2;
 }

 VAR_4 = FUNC_5(&VAR_7);

 return 0;
}
