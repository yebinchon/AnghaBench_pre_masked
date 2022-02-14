
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; int driver; } ;
struct amba_id {int dummy; } ;
struct amba_driver {int (* probe ) (struct amba_device*,struct amba_id const*) ;int id_table; } ;
struct amba_device {int dummy; } ;


 int FUNC_0 (struct amba_device*) ;
 struct amba_id* FUNC_1 (int ,struct amba_device*) ;
 int FUNC_2 (struct amba_device*) ;
 int FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct device*,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct amba_device*,struct amba_id const*) ;
 struct amba_device* FUNC_13 (struct device*) ;
 struct amba_driver* FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct device *VAR_0)
{
 struct amba_device *VAR_1 = FUNC_13(VAR_0);
 struct amba_driver *VAR_2 = FUNC_14(VAR_0->driver);
 const struct amba_id *VAR_3 = FUNC_1(VAR_2->id_table, VAR_1);
 int VAR_4;

 do {
  VAR_4 = FUNC_5(VAR_0->of_node, 0);
  if (VAR_4 < 0)
   break;

  VAR_4 = FUNC_3(VAR_0, 1);
  if (VAR_4)
   break;

  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4) {
   FUNC_4(VAR_0, 1);
   break;
  }

  FUNC_8(VAR_0);
  FUNC_10(VAR_0);
  FUNC_7(VAR_0);

  VAR_4 = VAR_2->probe(VAR_1, VAR_3);
  if (VAR_4 == 0)
   break;

  FUNC_6(VAR_0);
  FUNC_11(VAR_0);
  FUNC_9(VAR_0);

  FUNC_2(VAR_1);
  FUNC_4(VAR_0, 1);
 } while (0);

 return VAR_4;
}
