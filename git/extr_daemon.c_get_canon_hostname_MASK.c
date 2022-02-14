
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* buf; } ;
struct hostinfo {TYPE_1__ canon_hostname; } ;


 int FUNC_0 (struct hostinfo*) ;

__attribute__((used)) static const char *FUNC_1(struct hostinfo *VAR_0)
{
 FUNC_0(VAR_0);
 return VAR_0->canon_hostname.buf;
}
