
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct firmware_work {void (* cont ) (struct firmware const*,void*) ;int opt_flags; int work; struct device* device; int name; void* context; struct module* module; } ;
struct device {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct device*,char const*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct firmware_work*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,int ) ;
 struct firmware_work* FUNC_6 (int,int ) ;
 int VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct module*) ;

int
FUNC_9(
 struct module *VAR_7, bool VAR_8,
 const char *VAR_9, struct device *VAR_10, gfp_t VAR_11, void *VAR_12,
 void (*VAR_13)(const struct firmware *VAR_14, void *VAR_15))
{
 struct firmware_work *VAR_16;

 VAR_16 = FUNC_6(sizeof(struct firmware_work), VAR_11);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->module = VAR_7;
 VAR_16->name = FUNC_5(VAR_9, VAR_11);
 if (!VAR_16->name) {
  FUNC_3(VAR_16);
  return -VAR_1;
 }
 VAR_16->device = VAR_10;
 VAR_16->context = VAR_12;
 VAR_16->cont = VAR_13;
 VAR_16->opt_flags = VAR_3 |
  (VAR_8 ? VAR_4 : VAR_5);

 if (!VAR_8 && FUNC_1(VAR_10, VAR_9)) {
  FUNC_4(VAR_16->name);
  FUNC_3(VAR_16);
  return -VAR_2;
 }

 if (!FUNC_8(VAR_7)) {
  FUNC_4(VAR_16->name);
  FUNC_3(VAR_16);
  return -VAR_0;
 }

 FUNC_2(VAR_16->device);
 FUNC_0(&VAR_16->work, VAR_6);
 FUNC_7(&VAR_16->work);
 return 0;
}
