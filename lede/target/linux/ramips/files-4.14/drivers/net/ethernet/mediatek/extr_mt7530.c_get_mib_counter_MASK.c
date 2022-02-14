
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mt7530_priv {int dummy; } ;
struct TYPE_2__ {int size; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt7530_priv*,scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static u64 FUNC_1(struct mt7530_priv *VAR_3, int VAR_4, int VAR_5)
{
 unsigned int VAR_6;
 u64 VAR_7;

 VAR_6 = VAR_0 +
      VAR_1 * VAR_5;

 VAR_7 = FUNC_0(VAR_3, VAR_6 + VAR_2[VAR_4].offset);
 if (VAR_2[VAR_4].size == 2) {
  u64 VAR_8;

  VAR_8 = FUNC_0(VAR_3, VAR_6 + VAR_2[VAR_4].offset + 4);
  VAR_7 |= VAR_8 << 32;
 }

 return VAR_7;
}
