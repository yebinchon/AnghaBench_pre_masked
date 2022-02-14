
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {int unlink; int iocp; char* docroot; int verbose; int unixsock; int port; } ;
typedef int o ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (struct options*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct options
FUNC_5(int VAR_4, char **VAR_5)
{
 struct options VAR_6;
 int VAR_7;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));

 while ((VAR_7 = FUNC_2(VAR_4, VAR_5, "hp:U:uIv")) != -1) {
  switch (VAR_7) {
   case 'p': VAR_6.port = FUNC_0(VAR_0); break;
   case 'U': VAR_6.unixsock = VAR_0; break;
   case 'u': VAR_6.unlink = 1; break;
   case 'I': VAR_6.iocp = 1; break;
   case 'v': ++VAR_6.verbose; break;
   case 'h': FUNC_4(VAR_3, VAR_5[0], 0); break;
   default : FUNC_1(VAR_2, "Unknown option %c\n", VAR_7); break;
  }
 }

 if (VAR_1 >= VAR_4 || (VAR_4 - VAR_1) > 1) {
  FUNC_4(VAR_3, VAR_5[0], 1);
 }
 VAR_6.docroot = VAR_5[VAR_1];

 return VAR_6;
}
