
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct scx200_acb_iface {unsigned long base; TYPE_1__ adapter; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct scx200_acb_iface*) ;
 int FUNC_1 (char*,unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (unsigned long,int,int ) ;
 int FUNC_4 (struct scx200_acb_iface*) ;
 struct scx200_acb_iface* FUNC_5 (char const*,struct device*,int) ;

__attribute__((used)) static struct scx200_acb_iface *FUNC_6(const char *VAR_0,
  unsigned long VAR_1, int VAR_2, struct device *VAR_3)
{
 struct scx200_acb_iface *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(VAR_0, VAR_3, VAR_2);

 if (VAR_4 == ((void*)0))
  return ((void*)0);

 if (!FUNC_3(VAR_1, 8, VAR_4->adapter.name)) {
  FUNC_1("can't allocate io 0x%lx-0x%lx\n", VAR_1, VAR_1 + 8 - 1);
  goto errout_free;
 }

 VAR_4->base = VAR_1;
 VAR_5 = FUNC_4(VAR_4);

 if (VAR_5 == 0)
  return VAR_4;

 FUNC_2(VAR_1, 8);
 errout_free:
 FUNC_0(VAR_4);
 return ((void*)0);
}
