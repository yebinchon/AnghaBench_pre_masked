
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int hrz_dev ;


 int FUNC_0 (int const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int const*,int ) ;

__attribute__((used)) static u16 FUNC_3(const hrz_dev *VAR_5, u16 VAR_6)
{
  u32 VAR_7 = FUNC_2 (VAR_5, VAR_0);

  const unsigned int VAR_8 = 6;
  const unsigned int VAR_9 = 16;

  unsigned int VAR_10;

  u16 VAR_11;

  VAR_7 &= ~(VAR_1 | VAR_4 | VAR_2);
  FUNC_1(VAR_5, VAR_7);


  VAR_7 |= (VAR_1 | VAR_2);
  FUNC_0(VAR_5, VAR_7);

  VAR_7 |= VAR_2;
  FUNC_0(VAR_5, VAR_7);

  VAR_7 &= ~VAR_2;
  FUNC_0(VAR_5, VAR_7);

  for (VAR_10=0; VAR_10<VAR_8; VAR_10++) {
    if (VAR_6 & (1 << (VAR_8-1)))
      VAR_7 |= VAR_2;
    else
      VAR_7 &= ~VAR_2;

    FUNC_0(VAR_5, VAR_7);

    VAR_6 = VAR_6 << 1;
  }


  VAR_7 &= ~VAR_2;

  VAR_11 = 0;
  for (VAR_10=0;VAR_10<VAR_9;VAR_10++) {
    VAR_11 = VAR_11 >> 1;

    FUNC_0(VAR_5, VAR_7);

    if (FUNC_2 (VAR_5, VAR_0) & VAR_3)
      VAR_11 |= (1 << (VAR_9-1));
  }

  VAR_7 &= ~(VAR_4 | VAR_1);
  FUNC_1(VAR_5, VAR_7);

  return VAR_11;
}
