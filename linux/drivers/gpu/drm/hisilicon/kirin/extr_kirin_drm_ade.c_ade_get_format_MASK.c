
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ pixel_format; scalar_t__ hw_format; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,scalar_t__) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  if (VAR_1[VAR_3].pixel_format == VAR_2)
   return VAR_1[VAR_3].hw_format;


 FUNC_1("Not found pixel format!!fourcc_format= %d\n",
    VAR_2);
 return VAR_0;
}
