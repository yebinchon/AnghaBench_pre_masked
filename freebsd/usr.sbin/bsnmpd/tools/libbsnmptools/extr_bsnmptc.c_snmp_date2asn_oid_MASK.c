
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct asn_oid {int dummy; } ;
typedef scalar_t__ int32_t ;
typedef int asn_subid_t ;
typedef int UTC ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct asn_oid*,int ) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,char**,int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_2, struct asn_oid *VAR_3)
{
 char *VAR_4, *VAR_5;
 static const char VAR_6[3] = "UTC";
 int32_t VAR_7;
 uint32_t VAR_8;

 if (FUNC_0(VAR_3, (asn_subid_t) VAR_0) < 0)
  return (((void*)0));


 VAR_5 = VAR_2;
 VAR_7 = VAR_1;
 VAR_1 = 0;
 VAR_8 = FUNC_2(VAR_5, &VAR_4, 10);
 if (VAR_8 > 0xffff)
  goto error;
 else
  VAR_1 = VAR_7;
 if (*VAR_4 != '-')
  goto error1;
 if (FUNC_0(VAR_3, (asn_subid_t) ((VAR_8 & 0xff00) >> 8)) < 0)
  return (((void*)0));
 if (FUNC_0(VAR_3, (asn_subid_t) (VAR_8 & 0xff)) < 0)
  return (((void*)0));


 VAR_5 = VAR_4 + 1;
 VAR_7 = VAR_1;
 VAR_1 = 0;
 VAR_8 = FUNC_2(VAR_5, &VAR_4, 10);
 if (VAR_1 != 0)
  goto error;
 else
  VAR_1 = VAR_7;
 if (*VAR_4 != '-')
  goto error1;
 if (FUNC_0(VAR_3, (asn_subid_t) VAR_8) < 0)
  return (((void*)0));


 VAR_5 = VAR_4 + 1;
 VAR_7 = VAR_1;
 VAR_1 = 0;
 VAR_8 = FUNC_2(VAR_5, &VAR_4, 10);
 if (VAR_1 != 0)
  goto error;
 else
  VAR_1 = VAR_7;
 if (*VAR_4 != '-')
  goto error1;
 if (FUNC_0(VAR_3, (asn_subid_t) VAR_8) < 0)
  return (((void*)0));


 VAR_5 = VAR_4 + 1;
 VAR_7 = VAR_1;
 VAR_1 = 0;
 VAR_8 = FUNC_2(VAR_5, &VAR_4, 10);
 if (VAR_1 != 0)
  goto error;
 else
  VAR_1 = VAR_7;
 if (*VAR_4 != ':')
  goto error1;
 if (FUNC_0(VAR_3, (asn_subid_t) VAR_8) < 0)
  return (((void*)0));


 VAR_5 = VAR_4 + 1;
 VAR_7 = VAR_1;
 VAR_1 = 0;
 VAR_8 = FUNC_2(VAR_5, &VAR_4, 10);
 if (VAR_1 != 0)
  goto error;
 else
  VAR_1 = VAR_7;
 if (*VAR_4 != ':')
  goto error1;
 if (FUNC_0(VAR_3, (asn_subid_t) VAR_8) < 0)
  return (((void*)0));


 VAR_5 = VAR_4 + 1;
 VAR_7 = VAR_1;
 VAR_1 = 0;
 VAR_8 = FUNC_2(VAR_5, &VAR_4, 10);
 if (VAR_1 != 0)
  goto error;
 else
  VAR_1 = VAR_7;
 if (*VAR_4 != '.')
  goto error1;
 if (FUNC_0(VAR_3, (asn_subid_t) VAR_8) < 0)
  return (((void*)0));


 VAR_5 = VAR_4 + 1;
 VAR_7 = VAR_1;
 VAR_1 = 0;
 VAR_8 = FUNC_2(VAR_5, &VAR_4, 10);
 if (VAR_1 != 0)
  goto error;
 else
  VAR_1 = VAR_7;
 if (*VAR_4 != ',')
  goto error1;
 if (FUNC_0(VAR_3, (asn_subid_t) VAR_8) < 0)
  return (((void*)0));


 VAR_5 = VAR_4 + 1;
 if (FUNC_1(VAR_5, VAR_6, sizeof(VAR_6)) == 0)
  VAR_5 += sizeof(VAR_6);


 if (*VAR_5 == '-' || *VAR_5 == '+') {
  if (FUNC_0(VAR_3, (asn_subid_t) (*VAR_5)) < 0)
   return (((void*)0));
 } else
  goto error1;


 VAR_5 = VAR_4 + 1;
 VAR_7 = VAR_1;
 VAR_1 = 0;
 VAR_8 = FUNC_2(VAR_5, &VAR_4, 10);
 if (VAR_1 != 0)
  goto error;
 else
  VAR_1 = VAR_7;
 if (*VAR_4 != ':')
  goto error1;
 if (FUNC_0(VAR_3, (asn_subid_t) VAR_8) < 0)
  return (((void*)0));


 VAR_5 = VAR_4 + 1;
 VAR_7 = VAR_1;
 VAR_1 = 0;
 VAR_8 = FUNC_2(VAR_5, &VAR_4, 10);
 if (VAR_1 != 0)
  goto error;
 else
  VAR_1 = VAR_7;
 if (FUNC_0(VAR_3, (asn_subid_t) VAR_8) < 0)
  return (((void*)0));

 return (VAR_4);

  error:
 VAR_1 = VAR_7;
  error1:
 FUNC_3("Date value %s not supported", VAR_2);
 return (((void*)0));
}
