
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct cs_range {int dummy; } ;
struct TYPE_4__ {scalar_t__ base; } ;
struct TYPE_3__ {int cs_n; TYPE_2__* cs_ranges; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct device*,int,int,int ) ;
 TYPE_1__ VAR_2 ;
 struct device_node* FUNC_1 (int *,int *,char*) ;
 int* FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*,char*) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,int*,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3)
{
 int VAR_4 = -VAR_0;
 struct device_node *VAR_5;
 const u32 *VAR_6;
 const u32 *VAR_7;
 int VAR_8;
 size_t VAR_9;

 VAR_5 = FUNC_1(((void*)0), ((void*)0), "fsl,mpc5121-localbus");
 if (!VAR_5)
  return VAR_4;
 VAR_6 = FUNC_2(VAR_5, "#address-cells", ((void*)0));
 VAR_7 = FUNC_2(VAR_5, "#size-cells", ((void*)0));
 if (VAR_6 == ((void*)0) || *VAR_6 != 2 ||
    VAR_7 == ((void*)0) || *VAR_7 != 1) {
  goto end;
 }

 VAR_8 = FUNC_4(VAR_5, "ranges");
 if (VAR_8 <= 0 || VAR_8 % 4 != 0)
  goto end;

 VAR_2.cs_n = VAR_8 / 4;
 VAR_2.cs_ranges = FUNC_0(VAR_3, VAR_2.cs_n,
     sizeof(struct cs_range), VAR_1);
 if (!VAR_2.cs_ranges)
  goto end;

 if (FUNC_5(VAR_5, "ranges",
    (u32 *)VAR_2.cs_ranges, VAR_8) != 0) {
  goto end;
 }

 for (VAR_9 = 0; VAR_9 < VAR_2.cs_n; VAR_9++) {
  if (VAR_2.cs_ranges[VAR_9].base != 0)
   goto end;
 }

 VAR_4 = 0;

 end:
 FUNC_3(VAR_5);
 return VAR_4;
}
