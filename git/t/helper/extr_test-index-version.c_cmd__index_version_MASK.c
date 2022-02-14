
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_header {int hdr_version; } ;
typedef int hdr ;


 int FUNC_0 (struct cache_header*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,struct cache_header*,int) ;

int FUNC_4(int VAR_0, const char **VAR_1)
{
 struct cache_header VAR_2;
 int VAR_3;

 FUNC_0(&VAR_2,0,sizeof(VAR_2));
 if (FUNC_3(0, &VAR_2, sizeof(VAR_2)) != sizeof(VAR_2))
  return 0;
 VAR_3 = FUNC_1(VAR_2.hdr_version);
 FUNC_2("%d\n", VAR_3);
 return 0;
}
