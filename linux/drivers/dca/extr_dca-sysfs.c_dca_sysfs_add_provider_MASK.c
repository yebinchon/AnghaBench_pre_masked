
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct dca_provider {int id; struct device* cd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct device* FUNC_3 (int ,struct device*,int ,int *,char*,int) ;
 int FUNC_4 (int *,struct dca_provider*,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct dca_provider *VAR_5, struct device *VAR_6)
{
 struct device *VAR_7;
 int VAR_8;

 FUNC_5(VAR_0);
 FUNC_8(&VAR_4);

 VAR_8 = FUNC_4(&VAR_3, VAR_5, 0, 0, VAR_1);
 if (VAR_8 >= 0)
  VAR_5->id = VAR_8;

 FUNC_9(&VAR_4);
 FUNC_6();
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_3(VAR_2, VAR_6, FUNC_1(0, 0), ((void*)0), "dca%d", VAR_5->id);
 if (FUNC_0(VAR_7)) {
  FUNC_8(&VAR_4);
  FUNC_7(&VAR_3, VAR_5->id);
  FUNC_9(&VAR_4);
  return FUNC_2(VAR_7);
 }
 VAR_5->cd = VAR_7;
 return 0;
}
