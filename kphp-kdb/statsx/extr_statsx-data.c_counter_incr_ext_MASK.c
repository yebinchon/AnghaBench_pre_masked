
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_stats_visitor_ext64 {long long cnt_id; int user_id; int sex_age; int m_status; int polit_views; int section; int city; int country; int geoip_country; int source; } ;
struct lev_stats_visitor_ext {int user_id; int sex_age; int m_status; int polit_views; int section; int city; int country; int geoip_country; int source; } ;
struct lev_stats_visitor64 {long long cnt_id; int user_id; } ;
struct lev_stats_visitor {int user_id; } ;
struct counter {int unique_visitors; struct counter* commit_next; int views_uncommitted; int visitors_geoip_countries; int visitors_countries; int visitors_cities; int visitors_source; int visitors_sex_age; int visitors_section; int visitors_polit; int visitors_mstatus; int visitors_age; int * visitors_sex; int visitors; int deletes; int views; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int *,int,int ,int ) ;
 void* FUNC_1 (scalar_t__,int,long long) ;
 int FUNC_2 (int *,int,int) ;
 struct counter* VAR_18 ;
 int FUNC_3 (int ,char*,...) ;
 struct counter* FUNC_4 (long long,int) ;
 int FUNC_5 () ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_6 (struct counter*,int,int) ;
 int FUNC_7 (struct counter*) ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ,int) ;
 int VAR_26 ;

int FUNC_10 (long long VAR_27, int VAR_28, int VAR_29, int VAR_30, int VAR_31, int VAR_32, int VAR_33, int VAR_34, int VAR_35, int VAR_36, int VAR_37, int VAR_38,int VAR_39, int VAR_40) {
  int VAR_41 = 0;
  if (VAR_26 >= 4) {
    FUNC_3 (VAR_22, "counter_incr_ext (%lld, %d, %d, %d, %d)\n", VAR_27, VAR_28, VAR_29, VAR_30, VAR_31);
  }

  int VAR_42 = 16*VAR_32 + VAR_33;
  struct counter *VAR_43 = FUNC_4 (VAR_27, VAR_29 ? 3 : 1);
  if (!VAR_43) { return -1; }
  FUNC_7 (VAR_43);

  if (-1 > VAR_31 || VAR_31 >= VAR_14) {
    if (VAR_26 >= 1) {
      FUNC_3 (VAR_22, "Unknown subcounter (%d). Skipping.\n", VAR_31);
    }
    VAR_31 = -1;
  }

  if (VAR_30 == 0) {
    VAR_25++;
  } else {
    VAR_24++;
  }

  if (VAR_31 == -1) {
    if (VAR_30 == 0) {
      VAR_43->views++;
    } else {
      VAR_43->deletes++;
    }
  } else {
    VAR_41 = FUNC_6(VAR_43, VAR_31, (VAR_30 == 0) ? 1 : (-1));
  }

  if (VAR_26 >= 4) {
    FUNC_3 (VAR_22, "Starting\n");
  }


  if (VAR_31 != -1 || !FUNC_9 (VAR_43->visitors, VAR_28)) {
    if (VAR_31 == -1) {
      if ((VAR_21 >= VAR_23 && !VAR_19) || VAR_20) {


        VAR_43->visitors = FUNC_8 (VAR_43->visitors, VAR_28, FUNC_5());
      }
      if (VAR_26 >= 4) {
        FUNC_3 (VAR_22, "Inserted to tree\n");
      }
      VAR_43->unique_visitors++;
      if (VAR_32 > 0 && VAR_32 <= VAR_11) { VAR_43->visitors_sex[VAR_32-1]++; } else { VAR_32 = 0; }
      VAR_33 = FUNC_2 (&VAR_43->visitors_age, VAR_33, VAR_4);
      VAR_34 = FUNC_2 (&VAR_43->visitors_mstatus, VAR_34, VAR_8);
      VAR_35 = FUNC_2 (&VAR_43->visitors_polit, VAR_35, VAR_9);
      VAR_36 = FUNC_2 (&VAR_43->visitors_section, VAR_36, VAR_10);
      if (VAR_33 > 0 && VAR_32 > 0) {
        FUNC_2 (&VAR_43->visitors_sex_age, (VAR_32-1)*VAR_4+VAR_33, VAR_12);
      }
      VAR_40 = FUNC_2 (&VAR_43->visitors_source, VAR_40, VAR_13);
      if (VAR_37 > 0) {
        FUNC_0 (&VAR_43->visitors_cities, VAR_37, VAR_15, VAR_5);
      }
      if (VAR_39 > 0) {
        FUNC_0 (&VAR_43->visitors_countries, VAR_39, VAR_16, VAR_6);
      }
      if (VAR_38 > 0) {
        FUNC_0 (&VAR_43->visitors_geoip_countries, VAR_38, VAR_17, VAR_7);
      }
    }
    if (VAR_26 >= 4) {
      FUNC_3 (VAR_22, "Creating logevent\n");
    }
    if (!VAR_29) {
      if (VAR_32 | VAR_33 | VAR_34 | VAR_35 | VAR_36 | VAR_37 | VAR_39 | VAR_38 | VAR_40) {
        if (VAR_27 == (int)VAR_27) {
          struct lev_stats_visitor_ext *VAR_44 =
            FUNC_1 (VAR_2 + (VAR_30 << 7) + VAR_31 + 1, sizeof (struct lev_stats_visitor_ext), VAR_27);
          VAR_44->user_id = VAR_28;
          VAR_44->sex_age = VAR_42;
          VAR_44->m_status = VAR_34;
          VAR_44->polit_views = VAR_35;
          VAR_44->section = VAR_36;
          VAR_44->city = VAR_37;
          VAR_44->country = VAR_39;
          VAR_44->geoip_country = VAR_38;
          VAR_44->source = VAR_40;
        } else {
          struct lev_stats_visitor_ext64 *VAR_45 =
            FUNC_1 (VAR_3 + (VAR_30 << 7) + VAR_31 + 1, sizeof (struct lev_stats_visitor_ext64), VAR_27);
          VAR_45->cnt_id = VAR_27;
          VAR_45->user_id = VAR_28;
          VAR_45->sex_age = VAR_42;
          VAR_45->m_status = VAR_34;
          VAR_45->polit_views = VAR_35;
          VAR_45->section = VAR_36;
          VAR_45->city = VAR_37;
          VAR_45->country = VAR_39;
          VAR_45->geoip_country = VAR_38;
          VAR_45->source = VAR_40;
        }
      } else {
        if (VAR_27 == (int)VAR_27) {
          struct lev_stats_visitor *VAR_46 =
            FUNC_1 (VAR_0 + (VAR_30 << 7) + VAR_31 + 1, sizeof (struct lev_stats_visitor), VAR_27);
          VAR_46->user_id = VAR_28;
        } else {
          struct lev_stats_visitor64 *VAR_47 =
            FUNC_1 (VAR_1 + (VAR_30 << 7) + VAR_31 + 1, sizeof (struct lev_stats_visitor64), VAR_27);
          VAR_47->cnt_id = VAR_27;
          VAR_47->user_id = VAR_28;
        }
      }
    }
  } else if (!VAR_29 && !VAR_43->views_uncommitted++) {
    VAR_43->commit_next = VAR_18;
    VAR_18 = VAR_43;
  }
  if (VAR_26 >= 4) {
    FUNC_3 (VAR_22, "Incr done\n");
  }
  if (VAR_31 == -1) {
    return VAR_43->unique_visitors;
  } else {
    return VAR_41;
  }
}
