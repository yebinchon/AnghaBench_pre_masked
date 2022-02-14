
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {int created_at; int type; int views; int unique_visitors; int deletes; int valid_until; int long_unique_visitors; int last_month_unique_visitors; int last_week_unique_visitors; int* subcnt; scalar_t__ visitors; int timezone; int mask_subcnt; scalar_t__ visitors_source; scalar_t__ visitors_geoip_countries; scalar_t__ visitors_countries; scalar_t__ visitors_sex_age; scalar_t__ visitors_cities; scalar_t__ visitors_section; scalar_t__ visitors_polit; scalar_t__ visitors_mstatus; scalar_t__ visitors_age; int visitors_sex; int counter_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;

int FUNC_8 (struct counter *VAR_8) {
  int VAR_9, VAR_10, VAR_11 = 0;
  FUNC_7 (VAR_8->counter_id); VAR_11 += 8;
  FUNC_6 (VAR_8->created_at); VAR_11 += sizeof (int);
  FUNC_6 (VAR_8->type & ~VAR_0); VAR_11 += sizeof (int);
  FUNC_6 (VAR_8->views); VAR_11 += sizeof (int);
  FUNC_6 (VAR_8->unique_visitors); VAR_11 += sizeof (int);
  FUNC_6 (VAR_8->deletes); VAR_11 += sizeof (int);
  FUNC_6 (VAR_8->created_at); VAR_11 += sizeof (int);
  FUNC_6 (VAR_8->valid_until); VAR_11 += sizeof (int);
  FUNC_6 (VAR_8->long_unique_visitors); VAR_11 += sizeof (int);
  FUNC_6 (VAR_8->last_month_unique_visitors); VAR_11 += sizeof (int);
  FUNC_6 (VAR_8->last_week_unique_visitors); VAR_11 += sizeof (int);
  FUNC_4 (VAR_8->visitors_sex, sizeof (int) * 2); VAR_11 += 2 * sizeof (int);
  int VAR_12 = 0;
  if (VAR_8->visitors_age) { VAR_12 |= 1 << 0; }
  if (VAR_8->visitors_mstatus) { VAR_12 |= 1 << 1; }
  if (VAR_8->visitors_polit) { VAR_12 |= 1 << 2; }
  if (VAR_8->visitors_section) { VAR_12 |= 1 << 3; }
  if (VAR_8->visitors_cities) { VAR_12 |= 1 << 4; }
  if (VAR_8->visitors_sex_age) { VAR_12 |= 1 << 5; }
  if (VAR_8->visitors_countries) { VAR_12 |= 1 << 6; }
  if (VAR_8->visitors_geoip_countries) { VAR_12 |= 1 << 7; }
  if (VAR_8->visitors_source) { VAR_12 |= 1 << 8; }
  FUNC_6 (VAR_12); VAR_11 += sizeof (int);
  if (VAR_8->visitors_age) { VAR_11 += FUNC_1 (VAR_8->visitors_age, VAR_1); }
  if (VAR_8->visitors_mstatus) { VAR_11 += FUNC_1 (VAR_8->visitors_mstatus, VAR_2); }
  if (VAR_8->visitors_polit) { VAR_11 += FUNC_1 (VAR_8->visitors_polit, VAR_3); }
  if (VAR_8->visitors_section) { VAR_11 += FUNC_1 (VAR_8->visitors_section, VAR_4); }
  if (VAR_8->visitors_cities) { VAR_11 += FUNC_2 (VAR_8->visitors_cities); }
  if (VAR_8->visitors_sex_age) { VAR_11 += FUNC_1 (VAR_8->visitors_sex_age, VAR_5); }
  if (VAR_8->visitors_countries) { VAR_11 += FUNC_2 (VAR_8->visitors_countries); }
  if (VAR_8->visitors_geoip_countries) { VAR_11 += FUNC_2 (VAR_8->visitors_geoip_countries); }
  if (VAR_8->visitors_source) { VAR_11 += FUNC_1 (VAR_8->visitors_source, VAR_6); }


  FUNC_7 (VAR_8->mask_subcnt); VAR_11 += sizeof (long long);
  VAR_10 = FUNC_0(VAR_8->mask_subcnt);
  for (VAR_9=0; VAR_9 < VAR_10; VAR_9++) {
    FUNC_6(VAR_8->subcnt[VAR_9]); VAR_11 += sizeof(int);
  }
  FUNC_5 (VAR_8->timezone); VAR_11 += sizeof (char);
  if (VAR_8->valid_until < VAR_7) {
    VAR_8->visitors = 0;
  }
  VAR_11 += FUNC_3 (VAR_8->visitors);
  return VAR_11;
}
