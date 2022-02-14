
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ioat_dca_priv {int* tag_map; } ;
struct device {int dummy; } ;
struct dca_provider {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct ioat_dca_priv* FUNC_1 (struct dca_provider*) ;

__attribute__((used)) static u8 FUNC_2(struct dca_provider *VAR_4,
       struct device *VAR_5,
       int VAR_6)
{
 u8 VAR_7;

 struct ioat_dca_priv *VAR_8 = FUNC_1(VAR_4);
 int VAR_9, VAR_10, VAR_11, VAR_12;
 u8 VAR_13;

 VAR_7 = 0;
 VAR_10 = FUNC_0(VAR_6);

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_13 = VAR_8->tag_map[VAR_9];
  if (VAR_13 & VAR_1) {
   VAR_11 = VAR_13 &
    ~(VAR_1 | VAR_0);
   VAR_12 = (VAR_10 & (1 << VAR_11)) ? 1 : 0;
  } else if (VAR_13 & VAR_0) {
   VAR_11 = VAR_13 & ~VAR_0;
   VAR_12 = (VAR_10 & (1 << VAR_11)) ? 0 : 1;
  } else {
   VAR_12 = (VAR_13 & VAR_2) ? 1 : 0;
  }
  VAR_7 |= (VAR_12 << VAR_9);
 }

 return VAR_7;
}
