
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; void* end; void* start; } ;
struct amba_device {TYPE_1__ res; } ;
typedef void* resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amba_device*,char const*) ;
 struct amba_device* FUNC_1 (int,int ) ;

struct amba_device *FUNC_2(const char *VAR_2, resource_size_t VAR_3,
 size_t VAR_4)
{
 struct amba_device *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (VAR_5) {
  FUNC_0(VAR_5, VAR_2);
  VAR_5->res.start = VAR_3;
  VAR_5->res.end = VAR_3 + VAR_4 - 1;
  VAR_5->res.flags = VAR_1;
 }

 return VAR_5;
}
