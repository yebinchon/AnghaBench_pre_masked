
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ magic; int version; scalar_t__ nr_regions; } ;
struct log_c {scalar_t__ sync; TYPE_1__ header; int disk_header; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct log_c*,int ) ;

__attribute__((used)) static int FUNC_3(struct log_c *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_1(&VAR_5->header, VAR_5->disk_header);


 if (VAR_5->sync != VAR_0 || VAR_5->header.magic != VAR_3) {
  VAR_5->header.magic = VAR_3;
  VAR_5->header.version = VAR_2;
  VAR_5->header.nr_regions = 0;
 }






 if (VAR_5->header.version != VAR_2) {
  FUNC_0("incompatible disk log version");
  return -VAR_1;
 }

 return 0;
}
