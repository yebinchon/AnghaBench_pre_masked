
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxd2880_tnrdmd {scalar_t__ diver_mode; int io; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct cxd2880_tnrdmd
         *VAR_5)
{
 int VAR_6;

 if (!VAR_5)
  return -VAR_2;

 VAR_6 = FUNC_1(VAR_5->io,
       VAR_0,
       VAR_3,
       FUNC_0(VAR_3));
 if (VAR_6)
  return VAR_6;

 if (VAR_5->diver_mode == VAR_1)
  VAR_6 = FUNC_1(VAR_5->io,
        VAR_0,
        VAR_4,
        FUNC_0(VAR_4));

 return VAR_6;
}
