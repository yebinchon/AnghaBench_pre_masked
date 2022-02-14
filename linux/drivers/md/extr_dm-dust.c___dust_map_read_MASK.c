
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dust_device {int badblocklist; } ;
struct badblock {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct badblock* FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct dust_device *VAR_2, sector_t VAR_3)
{
 struct badblock *VAR_4 = FUNC_0(&VAR_2->badblocklist, VAR_3);

 if (VAR_4)
  return VAR_0;

 return VAR_1;
}
