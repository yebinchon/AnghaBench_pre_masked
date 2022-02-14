
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct platform_device {int dummy; } ;
struct TYPE_14__ {void* freq_tbl; } ;
struct TYPE_13__ {void* freq_tbl; } ;
struct TYPE_12__ {void* freq_tbl; } ;
struct TYPE_11__ {int freq_tbl; } ;
struct TYPE_10__ {void* freq_tbl; } ;
struct TYPE_9__ {void* freq_tbl; } ;
struct TYPE_8__ {void* freq_tbl; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 void* VAR_0 ;
 int VAR_1 ;
 TYPE_7__ VAR_2 ;
 TYPE_6__ VAR_3 ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 struct regmap* FUNC_2 (struct platform_device*,int *) ;
 int FUNC_3 (struct platform_device*,int *,struct regmap*) ;
 int FUNC_4 (struct regmap*,int,int*) ;
 int FUNC_5 (struct regmap*,int,int) ;
 TYPE_3__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 TYPE_1__ VAR_9 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_10)
{
 u32 VAR_11;
 struct regmap *VAR_12;

 VAR_12 = FUNC_2(VAR_10, &VAR_4);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);


 FUNC_4(VAR_12, 0x4, &VAR_11);
 if (VAR_11 == 0x12) {
  VAR_7.freq_tbl = VAR_0;
  VAR_5.freq_tbl = VAR_0;
  VAR_2.freq_tbl = VAR_0;
  VAR_8.freq_tbl = VAR_0;
  VAR_3.freq_tbl = VAR_0;
  VAR_9.freq_tbl = VAR_0;
  VAR_6.freq_tbl = VAR_1;
 }

 FUNC_5(VAR_12, 0xc4, 0x1);

 return FUNC_3(VAR_10, &VAR_4, VAR_12);
}
