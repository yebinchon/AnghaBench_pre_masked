
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int common; int ofs_delta; int multi_ack_detailed; int multi_ack; int include_tag; int side_band_64k; int side_band; int delete_refs; int thin_pack; } ;
typedef TYPE_1__ transport_smart_caps ;
typedef int git_vector ;
struct TYPE_6__ {char* capabilities; } ;
typedef TYPE_2__ git_pkt_ref ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char const**,int *,char const*) ;
 int FUNC_1 (char const*,int ) ;
 scalar_t__ VAR_10 ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (int ) ;

int FUNC_4(git_pkt_ref *VAR_11, transport_smart_caps *VAR_12, git_vector *VAR_13)
{
 const char *VAR_14;


 if (VAR_11 == ((void*)0) || VAR_11->capabilities == ((void*)0))
  return VAR_9;

 VAR_14 = VAR_11->capabilities;
 while (VAR_14 != ((void*)0) && *VAR_14 != '\0') {
  if (*VAR_14 == ' ')
   VAR_14++;

  if (VAR_10 && !FUNC_1(VAR_14, VAR_4)) {
   VAR_12->common = VAR_12->ofs_delta = 1;
   VAR_14 += FUNC_3(VAR_4);
   continue;
  }


  if (!FUNC_1(VAR_14, VAR_3)) {
   VAR_12->common = VAR_12->multi_ack_detailed = 1;
   VAR_14 += FUNC_3(VAR_3);
   continue;
  }

  if (!FUNC_1(VAR_14, VAR_2)) {
   VAR_12->common = VAR_12->multi_ack = 1;
   VAR_14 += FUNC_3(VAR_2);
   continue;
  }

  if (!FUNC_1(VAR_14, VAR_1)) {
   VAR_12->common = VAR_12->include_tag = 1;
   VAR_14 += FUNC_3(VAR_1);
   continue;
  }


  if (!FUNC_1(VAR_14, VAR_6)) {
   VAR_12->common = VAR_12->side_band_64k = 1;
   VAR_14 += FUNC_3(VAR_6);
   continue;
  }

  if (!FUNC_1(VAR_14, VAR_5)) {
   VAR_12->common = VAR_12->side_band = 1;
   VAR_14 += FUNC_3(VAR_5);
   continue;
  }

  if (!FUNC_1(VAR_14, VAR_0)) {
   VAR_12->common = VAR_12->delete_refs = 1;
   VAR_14 += FUNC_3(VAR_0);
   continue;
  }

  if (!FUNC_1(VAR_14, VAR_8)) {
   VAR_12->common = VAR_12->thin_pack = 1;
   VAR_14 += FUNC_3(VAR_8);
   continue;
  }

  if (!FUNC_1(VAR_14, VAR_7)) {
   int VAR_15;

   if ((VAR_15 = FUNC_0(&VAR_14, VAR_13, VAR_14)) < 0)
    return VAR_15;

   continue;
  }


  VAR_14 = FUNC_2(VAR_14, ' ');
 }

 return 0;
}
