
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sii8620 {int gen2_write_burst; scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sii8620*,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sii8620 *VAR_5)
{
 u8 VAR_6 = VAR_1;

 if (VAR_5->gen2_write_burst)
  return;

 if (VAR_5->mode >= VAR_2)
  VAR_6 |= VAR_0;

 FUNC_0(VAR_5,
  VAR_4, 100,
  VAR_3, VAR_6
 );
 VAR_5->gen2_write_burst = 1;
}
