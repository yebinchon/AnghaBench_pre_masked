
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_header {scalar_t__ hdr_signature; int hdr_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,struct pack_header*,int) ;

int FUNC_3(int VAR_4, struct pack_header *VAR_5)
{
 if (FUNC_2(VAR_4, VAR_5, sizeof(*VAR_5)) != sizeof(*VAR_5))

  return VAR_1;

 if (VAR_5->hdr_signature != FUNC_0(VAR_0))

  return VAR_2;
 if (!FUNC_1(VAR_5->hdr_version))

  return VAR_3;
 return 0;
}
