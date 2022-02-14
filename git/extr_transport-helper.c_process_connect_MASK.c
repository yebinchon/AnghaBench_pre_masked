
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transport {struct helper_data* data; } ;
struct TYPE_2__ {char* receivepack; char* uploadpack; } ;
struct helper_data {TYPE_1__ transport_options; } ;


 int FUNC_0 (struct transport*,char const*,char const*) ;

__attribute__((used)) static int FUNC_1(struct transport *VAR_0,
         int VAR_1)
{
 struct helper_data *VAR_2 = VAR_0->data;
 const char *VAR_3;
 const char *VAR_4;

 VAR_3 = VAR_1 ? "git-receive-pack" : "git-upload-pack";
 if (VAR_1)
  VAR_4 = VAR_2->transport_options.receivepack;
 else
  VAR_4 = VAR_2->transport_options.uploadpack;

 return FUNC_0(VAR_0, VAR_3, VAR_4);
}
