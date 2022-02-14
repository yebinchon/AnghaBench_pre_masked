
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ signature; scalar_t__ cksum; } ;
struct core99_header {scalar_t__ adler; int generation; TYPE_1__ hdr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static u32 FUNC_3(u8* VAR_1)
{
 struct core99_header* VAR_2 = (struct core99_header*)VAR_1;

 if (VAR_2->hdr.signature != VAR_0) {
  FUNC_0("Invalid signature\n");
  return 0;
 }
 if (VAR_2->hdr.cksum != FUNC_1(&VAR_2->hdr)) {
  FUNC_0("Invalid checksum\n");
  return 0;
 }
 if (VAR_2->adler != FUNC_2(VAR_1)) {
  FUNC_0("Invalid adler\n");
  return 0;
 }
 return VAR_2->generation;
}
