
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static pcap_t *
FUNC_9(const char *VAR_3, char *VAR_4, bool VAR_5)
{
 pcap_t *VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (VAR_6 == ((void*)0))
  goto out;

 FUNC_6(VAR_6, VAR_1);
 FUNC_4(VAR_6, VAR_5);
 FUNC_7(VAR_6, VAR_2);
 FUNC_5(VAR_6, (VAR_5 ? FUNC_0(VAR_0) : 0));
 FUNC_3(VAR_6, (VAR_5 ? 10 : 1) * VAR_1);
 FUNC_1(VAR_6);
 FUNC_8(VAR_6, VAR_5);
out:
 return VAR_6;
}
