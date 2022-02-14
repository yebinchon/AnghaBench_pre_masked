
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
typedef int lba_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_2(lba_t VAR_8)
{
 uint64_t VAR_9;

 VAR_9 = VAR_8 * VAR_5;
 VAR_9 = (VAR_9 + VAR_0 - 1) & ~(VAR_0 - 1);
 VAR_4 = (VAR_3 < VAR_1) ? VAR_1 : VAR_3;

 if (VAR_7)
  FUNC_0(VAR_6, "VMDK: image size = %jd, grain size = %jd\n",
      (uintmax_t)VAR_9, (uintmax_t)VAR_4);

 VAR_4 /= VAR_2;
 return (FUNC_1(VAR_9 / VAR_5));
}
