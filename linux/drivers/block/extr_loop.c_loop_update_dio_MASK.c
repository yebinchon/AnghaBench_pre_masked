
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {int use_dio; int lo_backing_file; } ;


 int FUNC_0 (struct loop_device*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct loop_device *VAR_0)
{
 FUNC_0(VAR_0, FUNC_1(VAR_0->lo_backing_file) |
   VAR_0->use_dio);
}
