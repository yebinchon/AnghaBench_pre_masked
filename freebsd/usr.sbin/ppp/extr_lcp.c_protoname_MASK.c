
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (unsigned int,int *,int ) ;

__attribute__((used)) static const char *
FUNC_1(unsigned VAR_0)
{
  static const char * const VAR_1[] = {

    ((void*)0),
    "MRU",
    "ACCMAP",
    "AUTHPROTO",
    "QUALPROTO",
    "MAGICNUM",
    "RESERVED",
    "PROTOCOMP",
    "ACFCOMP",
    "FCSALT",
    "SDP",
    "NUMMODE",
    "MULTIPROC",
    "CALLBACK",
    "CONTIME",
    "COMPFRAME",
    "NDE",
    "MRRU",
    "SHORTSEQ",
    "ENDDISC",
    "PROPRIETRY",
    "DCEID",
    "MULTIPP",
    "LDBACP",
  };

  if (VAR_0 > sizeof VAR_1 / sizeof *VAR_1 || VAR_1[VAR_0] == ((void*)0))
    return FUNC_0(VAR_0, ((void*)0), 0);

  return VAR_1[VAR_0];
}
